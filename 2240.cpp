//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int T, W;
//
//int list[1001];
//int dp[31][2][1001] = { 0, };
//// dp[�̵�Ƚ��][������ġ][�ð�]
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//
//	// �Է�
//	cin >> T >> W;
//	for (int i = 1; i <= T; i++)
//		cin >> list[i];
//
//
//	for (int j = 0; j <= W; j++)
//	{
//		for (int i = 1; i <= T; i++)
//		{
//			if (j == 0)
//			{	//ó�� ���۽� �ڵδ� 1�� ���� �Ʒ� ��ġ���ִ�.
//				dp[j][0][i] = dp[j][0][i - 1] + (list[i] == 1);
//			}
//			else
//			{
//				//ù ���� ���Ĵ�, ��ġ ������or�ȿ�����, ����or�������� Ȯ���ϸ� üũ�Ѵ�.
//				dp[j][0][i] = max(dp[j][0][i - 1] + (list[i] == 1), dp[j - 1][1][i - 1] + (list[i] == 1));
//				dp[j][1][i] = max(dp[j][1][i - 1] + (list[i] == 2), dp[j - 1][0][i - 1] + (list[i] == 2));
//				// dp[�̵�Ƚ��][�ڵ��� ��ġ][�帥 �ð�] = 
//				// (�̵������ʰ� �ð��� 1�� �帧 + i��° �Է°� ���� ��ġ�� ������?), 
//				// (�̵��߰�, 1�� �帧 + i��° �Է°� ���� ��ġ�� ������?) �� ū ��
//			}
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j <= W; j++)
//		{
//			// �������� ������ ��� �̵�Ƚ����, ��ġ�� ���� ū ���� ����Ѵ�.
//			ans = max(ans, dp[j][i][T]);
//		}
//	}
//
//	cout << ans << '\n';
//}