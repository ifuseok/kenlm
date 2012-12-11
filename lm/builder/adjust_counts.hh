#ifndef LM_BUILDER_ADJUST_COUNTS__
#define LM_BUILDER_ADJUST_COUNTS__

namespace lm {
namespace builder {

class ChainPositions;

/* Compute adjusted counts.  
 * Input: unique suffix sorted N-grams (and just the N-grams) with raw counts.
 * Output: suffix sorted [1,N]-grams with adjusted counts.  
 * The N-gram output replaces <s> <s> * entries with tombstones consisting of
 * all <s> and count 0.  These will go to the beginning on the next sort pass
 * and should be stripped off.  
 */
void AdjustCounts(const ChainPositions &positions);

} // namespace builder
} // namespace lm

#endif // LM_BUILDER_ADJUST_COUNTS__
