// �����f�[�^�� X-Y ���W�n�ɕϊ����ĕ\������

length_data_size = urg_get_distance(&urg, length_data, NULL);
for (i = 0; i < length_data_size; ++i) {
    // ���̋����f�[�^�̃��W�A���p�x�����߁AX, Y �̍��W�l���v�Z����
    double radian;
    long length;
    long x;
    long y;

    radian = urg_index2rad(&urg, i);
    length = length_data[i];
    // \todo check length is valid

    x = (long)(l * cos(radian));
    y = (long)(l * sin(radian));
    printf("(%ld, %ld), ", x, y);
}
printf("\n");