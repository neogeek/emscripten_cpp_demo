#include <emscripten/val.h>
#include <string>

using emscripten::val;

thread_local const val document = val::global("document");

int main()
{
    val canvas = document.call<val>("getElementById", std::string("canvas"));
    val ctx = canvas.call<val>("getContext", std::string("2d"));
    ctx.set("fillStyle", std::string("green"));
    ctx.call<void>("fillRect", 10, 10, 150, 100);
}
