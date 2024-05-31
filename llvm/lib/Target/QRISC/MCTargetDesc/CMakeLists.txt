add_llvm_component_library(LLVMQRISCDesc
  QRISCMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  QRISCInfo

  ADD_TO_COMPONENT
  QRISC
 )
