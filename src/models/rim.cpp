#include "models.h"
#include <iostream>
#include <vector>

double RIM() {
    // raw inputs
    double assets, 
           liabilities, 
           shares,
           risk_free_rate,
           beta, 
           market_return, 
           net_margin, 
           revenue_0, 
           revenue_growth_rate, 
           net_share_issuance_rate, 
           terminal_growth_rate, 
           dividend_payout_ratio, 
           forecast_years;

    // calculated variables
    double BV_0 = assets - liabilities;
    double r_e = riskFreeRate + beta * (marketReturn - riskFreeRate);
    double RI_t;
    double revenue_prior = revenue_0;
    double net_income_0 = revenue_0 * net_margin;
    double BV_prior = BV_0;

    // vectors for forecast values
    std::vector<double> revenue_list = {revenue_0};
    std::vector<double> net_income_list = {net_income_0};
    std::vector<double> BV_list = {BV_0};
    std::vector<double> RI_list;

    // foreast loop
    for (int i = 1; i <= forecastYears; i++) {
        // rev
        double revenue_t = revenue_prior * revGrowthRate;
        revenue_list.push_back(revenue_t);

        // earnings
        double net_income_t = revenue_t * net_margin;
        net_income_list.push_back(net_income_t);

        // div
        double dividend_t = net_income_t * dividend_payout_ratio;

        // BV
        double BV_t = BV_prior + net_income_t - dividend_t;
        BV_list.push_back(BV_t);

        // RI
        double RI_t = net_income_t - (r_e * BV_prior);
        RI_list.push_back(RI_t);

        // variable updates
        revenue_prior = revenue_t;
        net_income_prior = net_income_t;
        BV_prior = BV_t;
    }


    /* equation calculation */
    double calculate() {

    }

    /* return */
    return value;
}
