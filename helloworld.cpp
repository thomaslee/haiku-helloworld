#include <Application.h>
#include <Window.h>

int
main(int argc, char **argv)
{
	BApplication *app =
		new BApplication("application/x-vnd.example-helloworld");
			
	const window_type type = B_TITLED_WINDOW;
	const uint32 flags = B_ASYNCHRONOUS_CONTROLS | B_QUIT_ON_WINDOW_CLOSE;
	BWindow *window =
		new BWindow(BRect(50, 50, 320, 200), "Hello World", type, flags);
	window->Show();
	
	app->Run();
	delete app;
	
	return 0;
}
