#include <Application.h>
#include <Window.h>

class MainWindow : public BWindow
{
	public:
		MainWindow();
		virtual ~MainWindow();
		
	protected:
		void MessageReceived(BMessage *msg);
};

MainWindow::MainWindow()
	: BWindow(BRect(50, 50, 320, 200), "Hello World",
		B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS | B_QUIT_ON_WINDOW_CLOSE)
{
}

MainWindow::~MainWindow()
{
}

void
MainWindow::MessageReceived(BMessage *msg)
{
	
}

int
main(int argc, char **argv)
{
	BApplication *app =
		new BApplication("application/x-vnd.example-helloworld");
		
	MainWindow *window = new MainWindow();
	window->Show();
	
	app->Run();
	delete app;
	
	return 0;
}
