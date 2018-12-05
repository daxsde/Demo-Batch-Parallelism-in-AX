// Data contract
[DataContractAttribute]
class VALYDemoBatchIndividualTasksDataContract
{
    Integer workItemId;

    [DataMemberAttribute, SysOperationControlVisibilityAttribute(false)]
    public Integer parmWorkItemId(Integer _workItemId = workItemId)
    {
        workItemId = _workItemId;

        return workItemId;
    }
}
