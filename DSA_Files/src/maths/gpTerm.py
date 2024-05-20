def getNThTermsGP(A, B, N):
    common_ratio = B/A
    nTh_term = A * (common_ratio ** (N-1))
    return nTh_term

if __name__ == "__main__":
    res = getNThTermsGP(2, 3, 1)
    print(res)