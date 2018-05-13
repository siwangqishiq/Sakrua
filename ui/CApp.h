// ============================================================================
// [Include Section]
// ============================================================================
#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif
#include "SdlRenderDraw.cpp"
//#include <SDL2/SDL_image.h>
#include <string>

// ============================================================================
// [CApp]
// ============================================================================
// This is just a sample SDL application class to test that the app works.
class CApp{
public:
	// Application state
	enum APP_STATE
	{
		APP_OK = 0,
		APP_FAILED = 1
	};

	CApp();
	~CApp();
	
	// Run application, called by your code.
	int 			OnExecute();

private:
	
	// Whether the application is running.
	bool            running;

	SDL_Window*		window;
	SDL_Renderer*	renderer;
    
    SdlRenderDraw *mDraw;

	// Initialize application
	int 			OnInit();
	
	// Clean up the application
	void 			OnCleanup();

	// Called to process SDL event.
	void 			OnEvent(SDL_Event* event);

	// Called to update game logic
	void			OnUpdate();
	
	// Called to render the app.
	void 			OnRender();

protected:
	SDL_Texture* loadImage(std::string filename);

};
