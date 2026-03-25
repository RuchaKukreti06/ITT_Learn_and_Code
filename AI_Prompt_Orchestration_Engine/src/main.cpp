#include <iostream>
#include <memory>

#include "GenerateStep.h"
#include "SummarizeStep.h"
#include "TranslateStep.h"
#include "Workflow.h"

int main()
{
    std::shared_ptr<GenerateStep> generate = std::make_shared<GenerateStep>();
    std::shared_ptr<SummarizeStep> summarize = std::make_shared<SummarizeStep>();
    std::shared_ptr<TranslateStep> translate = std::make_shared<TranslateStep>();

    generate->setNext(summarize);
    summarize->setNext(translate);

    Workflow workflow;
    workflow.setStartStep(generate);

    std::string result = workflow.run("Product description");

    std::cout << result << std::endl;

    return 0;
}