#include"Application.h"

Application::Application()
{
}

Application::~Application()
{
}

void Application::start() {

	gene_time = 0;
	stage_.initalize();

	/*	world_.add_actor(ActorGroup::Square_Block,
			new_actor<Square>(world_, Vector2(GetRand(WINDOW_WIDTH)+100, 32)));*/
	

	for (int i = 0; i < 5; i++)
	{

		world_.add_actor(ActorGroup::Square_Block,
			new_actor<Square>(world_, Vector2(GetRand(WINDOW_WIDTH), 32)));
		// ‚Q‚O•ª‚Ì‚P•b‘Ò‚Â
	}

	//	world_.add_actor(ActorGroup::Square_Block,
	//		new_actor<Square>(world_, Vector2{0,0}));
	//
	world_.add_actor(ActorGroup::Player,
		new_actor<BaseLine>(world_, Vector2{ WINDOW_WIDTH / 2,900 }));

}

void Application::update() {

	timer.draw_fps();
	stage_.update();
	world_.update();

	/*if (GetNowCount()-gene_time >= 3000) 
	{
		world_.add_actor(ActorGroup::Square_Block,
			new_actor<Square>(world_, Vector2(GetRand(WINDOW_WIDTH) + 100, 32)));
		gene_time = 0;
	}	
	gene_time = GetNowCount();
*/
}

void Application::draw() {

	stage_.draw();
	world_.draw();

}
void Application::end() {
	world_.clear();
}

