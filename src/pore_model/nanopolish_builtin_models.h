//---------------------------------------------------------
// Copyright 2016 Ontario Institute for Cancer Research
// Written by Jared Simpson (jared.simpson@oicr.on.ca)
//---------------------------------------------------------
//
// nanopolish_builtin_models -- collection of models
// that are compiled directly into the nanopolish
// binary to avoid users having to pass them at runtime
//
#ifndef NANOPOLISH_BUILTIN_MODELS
#define NANOPOLISH_BUILTIN_MODELS

#include "nanopolish_poremodel.h"

// Autogenerated from convert_all_models.py
#include "builtin_models/r9_250bps_cpg_6mer_template_model.inl"
#include "builtin_models/r9_250bps_nucleotide_5mer_complement_pop1_model.inl"
#include "builtin_models/r9_250bps_nucleotide_5mer_complement_pop2_model.inl"
#include "builtin_models/r9_250bps_nucleotide_5mer_template_model.inl"
#include "builtin_models/r9_250bps_nucleotide_6mer_complement_pop1_model.inl"
#include "builtin_models/r9_250bps_nucleotide_6mer_complement_pop2_model.inl"
#include "builtin_models/r9_250bps_nucleotide_6mer_template_model.inl"
#include "builtin_models/r9_4_450bps_cpg_6mer_template_model.inl"
#include "builtin_models/r9_4_450bps_gpc_6mer_template_model.inl"
#include "builtin_models/r9_4_450bps_nucleotide_5mer_template_model.inl"
#include "builtin_models/r9_4_450bps_nucleotide_6mer_template_model.inl"
#include "builtin_models/r9_4_70bps_u_to_t_rna_5mer_template_model.inl"
#include "builtin_models/r9_4_450bps_dcm_6mer_template_model.inl"
#include "builtin_models/r9_4_450bps_dam_6mer_template_model.inl"
#include "builtin_models/r10_450bps_nucleotide_9mer_template_model.inl"
#include "builtin_models/r10_450bps_cpg_9mer_template_model.inl"
#include "builtin_models/r9_4_450bps_cpggpc_6mer_template_model.inl"

// Autogenerated from convert_all_models.py
const static std::vector<PoreModel> builtin_models({
	initialize_r9_250bps_cpg_6mer_template_model_builtin(),
	initialize_r9_250bps_nucleotide_5mer_complement_pop1_model_builtin(),
	initialize_r9_250bps_nucleotide_5mer_complement_pop2_model_builtin(),
	initialize_r9_250bps_nucleotide_5mer_template_model_builtin(),
	initialize_r9_250bps_nucleotide_6mer_complement_pop1_model_builtin(),
	initialize_r9_250bps_nucleotide_6mer_complement_pop2_model_builtin(),
	initialize_r9_250bps_nucleotide_6mer_template_model_builtin(),
	initialize_r9_4_450bps_cpg_6mer_template_model_builtin(),
	initialize_r9_4_450bps_gpc_6mer_template_model_builtin(),
	initialize_r9_4_450bps_nucleotide_5mer_template_model_builtin(),
	initialize_r9_4_450bps_nucleotide_6mer_template_model_builtin(),
	initialize_r9_4_70bps_u_to_t_rna_5mer_template_model_builtin(),
	initialize_r9_4_450bps_dcm_6mer_template_model_builtin(),
	initialize_r9_4_450bps_dam_6mer_template_model_builtin(),
    initialize_r9_4_450bps_cpggpc_6mer_template_model_builtin(),
	initialize_r10_450bps_nucleotide_9mer_template_model_builtin(),
	initialize_r10_450bps_cpg_9mer_template_model_builtin()
});

#endif
