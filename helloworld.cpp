#include <Application.h>
#include <StringView.h>
#include <Window.h>

class MainWindow : public BWindow
{
	public:
		MainWindow();
		virtual ~MainWindow();
};

MainWindow::MainWindow()
	: BWindow(BRect(0, 0, 320, 200), "Hello World", B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS)
{
}

MainWindow::~MainWindow()
{
}

class App : public BApplication
{
	public:
		App();
};

App::App()
	: BApplication("application/x-vnd.tomlee-helloworld")
{
	MainWindow *main_window = new MainWindow();
	main_window->Show();
}

int
main(int argc, char **argv)
{
	App *app = new App();
	app->Run();
	delete app;
	
	return 0;
}
