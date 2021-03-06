/**
 *  @file   LCContent/include/LCReclustering/ForceSplitTrackAssociationsAlg.h
 * 
 *  @brief  Header file for the force split track associations algorithm class.
 * 
 *  $Log: $
 */
#ifndef LC_FORCE_SPLIT_TRACK_ASSOCIATIONS_ALGORITHM_H
#define LC_FORCE_SPLIT_TRACK_ASSOCIATIONS_ALGORITHM_H 1

#include "Pandora/Algorithm.h"

namespace lc_content
{

/**
 *  @brief  ForceSplitTrackAssociationsAlg class
 */
class ForceSplitTrackAssociationsAlg : public pandora::Algorithm
{
public:
    /**
     *  @brief Default constructor
     */
    ForceSplitTrackAssociationsAlg();

private:
    pandora::StatusCode Run();
    pandora::StatusCode ReadSettings(const pandora::TiXmlHandle xmlHandle);

    typedef std::map<const pandora::Track *, const pandora::Cluster *> TrackToClusterMap;
    typedef std::map<const pandora::Track *, const pandora::Helix> TrackToHelixMap;

    unsigned int    m_minTrackAssociations;         ///< The minimum number of track associations to forcibly resolve
};

} // namespace lc_content

#endif // #ifndef LC_FORCE_SPLIT_TRACK_ASSOCIATIONS_ALGORITHM_H
