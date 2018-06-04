// ============================================================================
// [Include Section]
// ============================================================================
#include "CApp.h"
#include <iostream>
//#include "SdlRenderDraw.cpp"
#include "Mat.h"
using namespace std;

// ============================================================================
// [Defines & Constants]
// ============================================================================
#define APPTITLE 		"SDL2 Template Program"

const int SCREEN_WIDTH 	= 1280;
const int SCREEN_HEIGHT	= 800;


CApp::CApp() : running(false)
{
}

CApp::~CApp()
{
	OnCleanup();
}

int CApp::OnInit()
{
	Sakrua::Vec2 v;
	
	v.print();

    cout << "init panyi" << endl;
	// Initialize the SDL library.
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		fprintf(stderr, "SDL_Init() failed: %s\n", SDL_GetError());
		return APP_FAILED;
	}
	
	window = SDL_CreateWindow(APPTITLE, 
							  SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
							  SCREEN_WIDTH, SCREEN_HEIGHT, 
							  SDL_WINDOW_SHOWN);

	if (window != NULL) {
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	}
    
    mDraw = new SdlRenderDraw(renderer);
	
	// Success
	return APP_OK;
}

void CApp::OnCleanup(){
    
    if(mDraw != NULL){
        delete mDraw;
    }
    
	if (renderer != NULL) {
        SDL_DestroyRenderer(renderer);
	}
    
	if (window != NULL)	{
		SDL_DestroyWindow(window);
	}
   
	SDL_Quit();
}

int CApp::OnExecute()
{
	// Initialize application.
	int state = OnInit();
	if (state != APP_OK) {
		return state;
	}
	
	// Enter the SDL event loop.
	SDL_Event event;

	running = true;
	
	while (running){
		while (SDL_PollEvent(&event)) {
        	OnEvent(&event);
        }
		
		OnUpdate();
		OnRender();
	}
	
	return state;
}

void CApp::OnEvent(SDL_Event* event)
{
	switch (event->type)
	{
		case SDL_QUIT:
			running = false;
			break;
			
		case SDL_KEYDOWN:
			if (event->key.keysym.sym == SDLK_ESCAPE) {
				running = false;
			}
		default:
			break;
	}
}

void CApp::OnUpdate(){
	// Update your game logic here
    
}

void CApp::OnRender(){
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);
    
	// Do your drawing here
    
    mDraw->draw_line(100, 200);
	SDL_RenderPresent(renderer);
}

SDL_Texture* CApp::loadImage(std::string filename){
	SDL_Texture *tex = NULL;
	
	return NULL;
}


