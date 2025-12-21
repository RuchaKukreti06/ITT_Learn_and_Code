class CsvExporter : IExporter
{
    public string Export(List<Customer> data)
    {
        StringBuilder stringBuilder = new StringBuilder();

        foreach (var item in data)
        {
            stringBuilder.AppendFormat("{0},{1},{2},{3}",
                item.CustomerID,
                item.CompanyName,
                item.ContactName,
                item.Country);

            stringBuilder.AppendLine();
        }

        return stringBuilder.ToString();
    }
}
