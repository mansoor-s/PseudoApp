#include "window.h"

Window::Window(QObject *parent) : QObject(parent) {
}


Window::Window(QWebView *window) {
    this->window = window;
}


void Window::setWindow(QWebView *window) {
    this->window = window;
}


void Window::hide() {
    this->window->hide();
}


void Window::show() {
    this->window->show();
}


void Window::close() {
    this->window->close();
}


bool Window::isHidden() {
    return this->window->isHidden();
}


bool Window::isVisible() {
    return this->window->isVisible();
}


//QSize Window::size() {
//    return this->window->size();
//}


void Window::setSize(int width, int height) {
    this->window->setFixedSize(width, height);
}


void Window::height(int height) {
    this->window->setFixedHeight(height);
}


int Window::height() {
    return this->window->height();
}


void Window::width(int width) {
    this->window->setFixedWidth(width);
}

int Window::width() {
    return this->window->width();
}

void Window::setOpacity(double opacity) {
    this->window->setWindowOpacity(qreal(opacity));
}


double Window::opacity() {
    return this->window->windowOpacity();
}


QString Window::title() {
    return this->window->windowTitle();
}


void Window::setTitle(QString text) {
    this->window->setWindowTitle(text);
}

void Window::minimize() {
    this->window->setWindowState(Qt::WindowMinimized);
}

void Window::maximize() {
    this->window->setWindowState(Qt::WindowMaximized);
}

void Window::restore() {
    this->window->setWindowState(Qt::WindowNoState);
}

void Window::fullscreen() {
    this->window->setWindowState(Qt::WindowFullScreen);
}

void Window::setFocus() {
    this->window->setWindowState(Qt::WindowActive);
}
