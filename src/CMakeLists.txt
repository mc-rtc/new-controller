set(controller_SRC
  NewController.cpp
)

set(controller_HDR
  NewController.h
)

add_controller(${PROJECT_NAME} ${controller_SRC} ${controller_HDR})
set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-DNewController_EXPORTS")

