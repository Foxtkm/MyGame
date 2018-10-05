#include"Application.h"

Application::Application()
{
}

Application::~Application()
{
}

void Application::start() {
	
	gene_time;
	stage_.initalize();
	//for (int y = 0; y < 5; y++) {
	//	for (int x = 0; y < 5; y++) {

			world_.add_actor(ActorGroup::Square_Block,
				new_actor<Square>(world_, Vector2(WINDOW_WIDTH/2,32)));
	//	}
	//}


	//	world_.add_actor(ActorGroup::Square_Block,
	//		new_actor<Square>(world_, Vector2{0,0}));
	//
	world_.add_actor(ActorGroup::Player,
		new_actor<BaseLine>(world_, Vector2{WINDOW_WIDTH/2,900}));
}

void Application::update() {

	timer.draw_fps();
	stage_.update();
	world_.update();
}

void Application::draw() {
	
	stage_.draw();
	world_.draw();

}
void Application::end() {
	world_.clear();
}

