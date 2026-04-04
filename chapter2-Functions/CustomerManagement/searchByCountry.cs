class SearchByContact: ICustomerSearch
{
    public List<Customer> Search(List<Customer> customers, string contact)
    {
        return customers
            .Where(customers => customers.Contact.Contains(contact))
            .OrderBy(customers => customers.CustomerID)
            .ToList();
    }
}
