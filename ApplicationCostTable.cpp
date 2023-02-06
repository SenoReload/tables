public class CALX_ApplicationCostTable extends common
{
    /// <summary>
    ///
    /// </summary>
    public void insert()
    {
        ttsbegin;
        NumberSeq numberSeq = NumberSeq::newGetNum(ProdParameters::numRefApplicationCostId());
        this.CALX_CostAllocationProcessNumb = numberSeq.num();
        ttscommit;
        super();
    }
  
    /// <summary>
    ///
    /// </summary>
    public static List ConfigAccounts()
    {
        List ac = new List(Types::String);
        CALX_ApplicationCostTable applCost;
        while select applCost
        {
            ac.addEnd(applCost.AccountNum);
           // ac.addEnd(applCost.OffsetAccountNum);
        }
        return ac;
    }

}



  
