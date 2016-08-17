void  InitializeControlNULL(CONTROL*);
void InitializeBodyNULL(BODY*,CONTROL*,UPDATE*,int,int);
void FinalizeUpdateNULL(BODY*,UPDATE*,int*,int,int,int);
void InitializeUpdateTmpBodyNULL(BODY*,CONTROL*,UPDATE*,int);
void InitializeModuleNULL(CONTROL*,MODULE*);
void PropsAuxNULL(BODY*,EVOLVE*,UPDATE*,int);

void PrintModuleList(FILE*,int);

double fdUpdateFunctionTiny(BODY*,SYSTEM*,int*);
void SetDerivTiny(fnUpdateVariable***,int,int,int);

void InitializeModule(MODULE*,int);
void FinalizeModule(BODY*,MODULE*,int);
double fdReturnOutputZero(BODY*,SYSTEM*,UPDATE*,int,int);
void ReadModules(BODY*,CONTROL*,FILES*,MODULE*,OPTIONS*,int);
void InitializeBodyModules(BODY**,int);

void VerifyModuleMulti(BODY*,CONTROL*,FILES*,MODULE*,OPTIONS*,int);

void PropsAuxEqtideThermint(BODY*,EVOLVE*,UPDATE*,int);
void PropsAuxAtmescEqtideThermint(BODY*,EVOLVE*,UPDATE*,int);
void PropsAuxDistOrbDistRot(BODY*,EVOLVE*,UPDATE*,int);
void PropsAuxRadheatThermint(BODY*,EVOLVE*,UPDATE*,int);
void PropsAuxFlareStellar(BODY*,EVOLVE*,UPDATE*,int);
void PropsAuxAtmescEqtide(BODY*,EVOLVE*,UPDATE*,int);

void ForceBehaviorAtmescEqtideThermint(BODY*,EVOLVE*,IO*,SYSTEM*,UPDATE*,fnUpdateVariable***,int,int);
void ForceBehaviorEqtideDistOrb(BODY*,EVOLVE*,IO*,SYSTEM*,UPDATE*,fnUpdateVariable***,int,int);
