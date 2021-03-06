/**
 *  @file   LCContent/include/LCCheating/CheatingTrackToClusterMatching.h
 * 
 *  @brief  Header file for the cheating track to cluster matching algorithm class.
 * 
 *  $Log: $
 */
#ifndef LC_CHEATING_TRACK_TO_CLUSTER_MATCHING_ALGORITHM_H
#define LC_CHEATING_TRACK_TO_CLUSTER_MATCHING_ALGORITHM_H 1

#include "Pandora/Algorithm.h"

namespace lc_content
{

/**
 *  @brief CheatingTrackToClusterMatching class
 */
class CheatingTrackToClusterMatching : public pandora::Algorithm
{
private:
    pandora::StatusCode Run();
    pandora::StatusCode ReadSettings(const pandora::TiXmlHandle xmlHandle);
};

} // namespace lc_content

#endif // #ifndef LC_CHEATING_TRACK_TO_CLUSTER_MATCHING_ALGORITHM_H
