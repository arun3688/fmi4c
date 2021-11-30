#ifndef FMIC_TYPES_FMI1_H
#define FMIC_TYPES_FMI1_H

// Types
typedef void* fmi1Component;
typedef unsigned int fmi1ValueReference;
typedef double fmi1Real;
typedef int fmi1Integer;
typedef char fmi1Boolean;
typedef const char* fmi1String;

// Enums
typedef enum  { fmi1OK, fmi1Warning, fmi1Discard, fmi1Error, fmi1Fatal} fmi1Status;
typedef enum { fmi1DoStepStatus, fmi1PendingStatus, fmi1LastSuccessfulTime} fmi1StatusKind;
typedef enum { fmi1ModelExchange, fmi1CoSimulationStandAlone, fmi1CoSimulationTool } fmi1Type;
typedef enum { fmi1CausalityInput, fmi1CausalityOutput, fmi1CausalityInternal, fmi1CausalityNone } fmi1Causality;
typedef enum { fmi1VariabilityConstant, fmi1VariabilityParameter, fmi1VariabilityDiscrete, fmi1VariabilityContinuous } fmi1Variability;
typedef enum { fmi1DataTypeReal, fmi1DataTypeInteger, fmi1DataTypeBoolean, fmi1DataTypeString, fmi1DataTypeEnumeration } fmi1DataType;

#endif // FMIC_TYPES_FMI1_H