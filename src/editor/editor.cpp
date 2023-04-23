#include "editor/editor.hpp"
#include "imgui.h"

namespace MarkdownEditor {

    void Editor::renderUI() {
        ImGui::Begin("Editor");
        ImGui::Text("Hello, from Editor!");
        ImGui::End();
    }

}