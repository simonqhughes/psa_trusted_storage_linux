/*
 * Copyright (c) 2019 Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "config.h"
#include "psa/internal_trusted_storage.h"
#include "common_storage.h"

psa_status_t psa_its_set(psa_storage_uid_t uid,
                         size_t data_length,
                         const void *p_data,
                         psa_storage_create_flags_t create_flags)
{

    return psa_cs_set(uid, data_length, p_data, create_flags, PSA_CS_API_ITS, NULL );

}

psa_status_t psa_its_get(psa_storage_uid_t uid,
                         size_t data_offset,
                         size_t data_size,
                         void *p_data,
                         size_t *p_data_length)
{
    return psa_cs_get(uid, data_offset, data_size, p_data, p_data_length, PSA_CS_API_ITS );
}

psa_status_t psa_its_get_info(psa_storage_uid_t uid,
                              struct psa_storage_info_t *p_info)
{
    return psa_cs_get_info(uid, p_info, PSA_CS_API_ITS );
}

psa_status_t psa_its_remove(psa_storage_uid_t uid)
{
    return psa_cs_remove(uid, PSA_CS_API_ITS );
}

