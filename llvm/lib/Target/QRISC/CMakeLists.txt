add_llvm_component_group(QRISC)

add_llvm_target(QRISCCodeGen
  QRISCTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  QRISCInfo

  ADD_TO_COMPONENT
  QRISC
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
