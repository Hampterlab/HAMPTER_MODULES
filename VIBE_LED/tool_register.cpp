#include "hooks.h"
#include "registry.h"
#include "port_registry.h"                 // ★ 포트 레지스트리
#include "modules/express_emotion_tool.h"

// 1. 패턴 생성(저장) 툴
void register_tools(ToolRegistry& reg, const ToolConfig& cfg) {
  reg.add(new CreatePatternTool());
  reg.add(new ChangeSlotTool());
  reg.add(new SlotStatusTool());
}



// ★ 여기서 포트 등록
void register_ports(PortRegistry& reg, const PortConfig& cfg) {
  (void)cfg;

  // 예: 범용 InPort들
  reg.createInPort("var_a", "float");
  reg.createInPort("var_b", "float");
  reg.createInPort("var_c", "float");

}