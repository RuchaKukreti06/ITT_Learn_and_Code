class SearchByCompanyName : ICustomerSearch
{
    public List<Customer> Search(List<Customer> customers, string companyName)
    {
        return customers
            .Where(customers => customers.CompanyName.Contains(companyName))
            .OrderBy(customers => customers.CustomerID)
            .ToList();
    }
}
