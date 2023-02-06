public class CALX_CostAllocationTable extends common
{
    /// <summary>
    ///
    /// </summary>
    /// <returns></returns>
    public boolean validateWrite()
    {
        boolean ret;
    
        ret = super();
        return ret;
    }
  
    public void insert()
    {
        // ACC-04/01/23 Begin
        ttsbegin;
        NumberSeq numberSeq = NumberSeq::newGetNum(ProdParameters::numRefCostAllocationId());
        this.Id = numberSeq.num();
        ttscommit;
        // ACC-04/01/23 End
        super();
    }
}



