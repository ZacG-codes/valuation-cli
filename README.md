# Intrinsic Valuation CLI Tool README

## What it does

## How it works

## Building Process
1. main logic
2. CLI
3. yfinance api
4. company data
5. models

## Necessary Data
- all
    - shares outstanding
    - current share price
- NAV
    - assets
    - liabilities
- DDM
    - return on equity
        - net income
        - shareholder equity
    - retention ratio
    - current dividend (d_0)
    - cost of equity (r)
    - CAPM
        - risk free rate
        - beta
        - equity risk premium
- RI
    - book value
    - cost of equity
    - residual income
        - net income
- DCF
    - FCFF
        - ebit
        - tax rate
        - d&a
        - capex
        - change in net working capital
        - 
    - wacc
        - equity value
        - debt value
        - cost of equity
        - cost of debt
            - YTM on public debt
            - credit rating
                - risk free rate
                - default spread
            - interest coverage ratio
                - ebit
                - interest expense
                - risk free rate
            - effective tax rate
        - tax rate
    - terminal value (gordon growth model)
        - FCF_(final year)
        - perpetual growth rate (gpd: 3%)
    - forecast period growth rate (fundamental growth)
        - reinvestment rate
            - capex
            - depreciation
            - change in non-cash working capital
            - ebit
            - tax rate
        - return on capital
            - ebit
            - tax rate
            - book value of debt
            - book value of equity
            - cash
        - revenue or ebit
