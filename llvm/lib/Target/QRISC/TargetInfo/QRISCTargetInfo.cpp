#include "TargetInfo/QRISCTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

Target &llvm::getTheQRISCTarget() {
  static Target TheSimTarget;
  return TheSimTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeQRISCTargetInfo() {
  RegisterTarget<Triple::qrisc> X(getTheQRISCTarget(), "qrisc", "qrisc arch",
                                  "QRISC");
}
