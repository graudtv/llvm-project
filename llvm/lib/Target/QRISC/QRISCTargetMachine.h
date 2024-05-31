#ifndef LLVM_LIB_TARGET_QRISC_QRISCTARGETMACHINE_H
#define LLVM_LIB_TARGET_QRISC_QRISCTARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include <optional>

namespace llvm {
extern Target TheQRISCTarget;

class QRISCTargetMachine : public LLVMTargetMachine {
public:
  QRISCTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                     StringRef FS, const TargetOptions &Options,
                     std::optional<Reloc::Model> RM,
                     std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                     bool JIT);
};

} // end namespace llvm

#endif // LLVM_LIB_TARGET_QRISC_QRISCTARGETMACHINE_H
