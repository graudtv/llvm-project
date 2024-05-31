add_llvm_component_library(LLVMQRISCInfo
  QRISCTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  QRISC
  )
