#include <iostream>
#include <iomanip>
using namespace std;
float get()
{
    string b;
    getline(cin, b);
    stringstream a(b);
    float c;
    if (a >> c)
    {
        return c;
    }
    else
    {
        std::cout << "Masukan angka\n";
        return get();
    }
    return c;
}
float dosentetap()
{
    cout << "[Dosen Tetap]\n*Kecukupan jumlah DTPS\nMasukan nilai jumlah dosen tetap yang ditugaskan sebagai pengampu mata kuliah dengan bidang keahlian yang sesuai dengan kompetensi inti program studi yang diakreditas:";
    float a, b, c, d, s = 0, ss = 0;
    a = get();
    if (a >= 6)
    {
        s = 4;
    }
    else if (3 <= a < 6)
    {
        s = (2 * a) / 3;
    }

    cout << "<Skor = " << s << ">\n\n";
    cout << "*Jabatan akademik DTPS\nMasukan nilai jumlah DTPS yang memiliki jabatan akademik Guru Besar:";
    b = get();
    cout << "Masukan nilai jumlah DTPS yang memiliki jabatan akademik Lektor Kepala:";
    c = get();
    d = ((b + c) / a) * 100;
    if (d >= 70)
    {
        ss = 4;
    }
    else
    {
        ss = 2 + ((20 * (d / 100)) / 7);
    }

    cout << "<Skor = " << ss << ">\n\nNilai Dosen Tetap: " << s + ss;
    return s + ss;
}
float kurikulum()
{
    float s = 0, ss = 0, sss = 0;
    cout << "\n[Kurikulum]\n*Keterlibatan pemangku kepentingan dalam proses evaluasi dan pemutakhiran kurikulum:\n{4}. Evaluasi dan pemutakhiran kurikulum secara berkala tiap 4 s.d. 5 tahun yang melibatkan pemangku kepentingan internal dan eksternal, serta direview oleh pakar bidang ilmu program studi, industri, asosiasi, serta sesuai perkembangan ipteks dan kebutuhan pengguna.\n{3}. Evaluasi dan pemutakhiran kurikulum secara berkala tiap 4 s.d. 5 tahun yang melibatkan pemangku kepentingan internal dan eksternal.\n{2}. Evaluasi dan pemutakhiran kurikulum melibatkan pemangku kepentingan internal.\n{1}. Evaluasi dan pemutakhiran kurikulum tidak melibatkan seluruh pemangku kepentingan internal.\n{0}. Evaluasi dan pemutakhiran kurikulum dilakukan oleh dosen program studi.\n";
    do
    {
        cout << "Pilih 0-4: ";
        s = get();
    } while (0 > s || s > 4);
    cout << "<Skor = " << s << ">\n\n";
    cout << "*Kesesuaian capaian pembelajaran dengan profil lulusan dan jenjang KKNI/SKKNI:\n{4}. Capaian pembelajaran diturunkan dari profil lulusan, mengacu pada hasil kesepakatan dengan asosiasi penyelenggara program studi sejenis dan organisasi profesi, dan memenuhi level KKNI, serta dimutakhirkan secara berkala tiap 4 s.d. 5 tahun sesuai perkembangan ipteks dan kebutuhan pengguna.\n{3}. Capaian pembelajaran diturunkan dari profil lulusan, memenuhi level KKNI, dan dimutakhirkan secara berkala tiap 4 s.d. 5 tahun sesuai perkembangan ipteks atau kebutuhan pengguna.\n{2}. Capaian pembelajaran diturunkan dari profil lulusan dan memenuhi level KKNI.\n{1}. Capaian pembelajaran diturunkan dari profil lulusan dan tidak memenuhi level KKNI.\n{0}. Capaian pembelajaran tidak diturunkan dari profil lulusan dan tidak memenuhi level KKNI.\n";
    do
    {
        cout << "Pilih 0-4: ";
        ss = get();
    } while (0 > ss || ss > 4);
    cout << "*Ketepatan struktur kurikulum dalam pembentukan capaian pembelajaran:\n{4}. Struktur kurikulum memuat keterkaitan antara matakuliah dengan capaian pembelajaran lulusan yang digambarkan dalam peta kurikulum yang jelas, capaian pembelajaran lulusan dipenuhi oleh seluruh capaian pembelajaran matakuliah, serta tidak ada capaian pembelajaran matakuliah yang tidak mendukung capaian pembelajaran lulusan.\n{3}. Struktur kurikulum memuat keterkaitan antara matakuliah dengan capaian pembelajaran lulusan yang digambarkan dalam peta kurikulum yang jelas, capaian pembelajaran lulusan dipenuhi oleh seluruh capaian pembelajaran matakuliah.\n{2}. Struktur kurikulum memuat keterkaitan antara matakuliah dengan capaian pembelajaran lulusan yang digambarkan dalam peta kurikulum yang jelas.\n{1}. Struktur kurikulum tidak sesuai dengan capaian pembelajaran lulusan.\n";
    do
    {
        cout << "Pilih 1-4: ";
        sss = get();
    } while (1 > sss || sss > 4);
    float gg = (s + (2 * ss) + (2 * sss)) / 5;
    cout << "<Skor = " << sss << ">\n\nNilai Kurikulum: " << gg;
    return gg;
}
float mutu()
{
    float s = 0, ss = 0;
    cout << "\n[Penjaminan Mutu]\n=Sistem Penjaminan Mutu Internal\n*Keterlaksanaan Sistem Penjaminan Mutu Internal (akademik dan nonakademik) yang dibuktikan dengan keberadaan 5 aspek:\n1) dokumen legal pembentukan unsur pelaksana penjaminan mutu.\n2) ketersediaan dokumen mutu: kebijakan SPMI, manual SPMI, standar SPMI, dan formulir SPMI.\n3) terlaksananya siklus penjaminan mutu (siklus PPEPP).\n4) bukti sahih efektivitas pelaksanaan penjaminan mutu.\n5) memiliki external benchmarking dalam peningkatan mutu.\n\nOpsi:\n{4}. UPPS telah melaksanakan SPMI yang memenuhi 5 aspek.\n{3}. UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 sampai dengan 4.\n{2}. UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 sampai dengan 3.\n{1}. UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 dan 2, serta siklus kegiatan SPMI baru dilaksanakan pada tahapan.\n{0}. UPPS telah memiliki dokumen legal pembentukan unsur pelaksana penjaminan mutu tanpa pelaksanaan SPMI.\n";
    do
    {
        cout << "Pilih 0-4: ";
        s = get();
    } while (0 > s || s > 4);
    cout << "<Skor = " << s << ">\n\n";
    cout << "=Pelampauan SN-DIKTI\n*Pelampauan SNDIKTI yang ditetapkan oleh UPPS:\n{4}. UPPS menetapkan standar mutu yang melampaui SN-DIKTI dan memiliki daya saing internasional. Indikator kinerja tambahan mencakup seluruh standar yang ditetapkan. Data indikator kinerja telah diukur, dimonitor, dikaji, dan dianalisis untuk perbaikan berkelanjutan.\n{3}. UPPS menetapkan standar mutu yang melampaui SN-DIKTI dan memiliki daya saing nasional. Indikator kinerja tambahan mencakup sebagian standar yang ditetapkan. Data indikator kinerja tambahan telah diukur, dimonitor, dikaji, dan dianalisis untuk perbaikan berkelanjutan.\n{2}. UPPS tidak menetapkan indikator kinerja tambahan.\n";
    do
    {
        cout << "Pilih 2-4: ";
        ss = get();
    } while (2 > ss || ss > 4);
    float g = s + ss;
    cout << "<Skor = " << ss << ">\n\nNilai Penjaminan Mutu: " << g;
    return g;
}
float lulusan()
{
    cout << "\n[Pelacakan Lulusan]\n=Sistem Pelacakan Lulusan\n*Pelaksanaan studi pelacakan (tracer study) yang mencakup 5 aspek sebagai berikut:\n1) pelaksanaan tracer study terkoordinasi di tingkat PT, 2) kegiatan tracer study dilakukan secara reguler setiap tahun dan terdokumentasi, 3) isi kuesioner mencakup seluruh pertanyaan inti tracer study DIKTI. 4) ditargetkan pada seluruh populasi (lulusan TS-4 s.d. TS2), 5) hasilnya disosialisasikan dan digunakan untuk pengembangan kurikulum dan pembelajaran.\n\nOpsi:\n{4}. Tracer study yang dilakukan UPPS telah mencakup 5 aspek.\n{3}. Tracer study yang dilakukan UPPS telah mencakup 4 aspek.\n{2}. Tracer study yang dilakukan UPPS telah mencakup 3 aspek.\n{1}. Tracer study yang dilakukan UPPS telah mencakup 2 aspek.\n{0}. UPPS tidak melaksanakan tracer study.\n";
    float s = 0, ss = 0, sss = 0;
    do
    {
        cout << "Pilih 0-4: ";
        s = get();
    } while (0 > s || s > 4);
    cout << "<Skor = " << s << ">\n\n=Kesesuaian Bidang Kerja\n*Kesesuaian bidang kerja lulusan saat mendapatkan pekerjaan pertama.\nPBS = Kesesuaian bidang kerja lulusan saat mendapatkan pekerjaan pertama dalam 3 tahun, mulai TS-4 s.d. TS-2. \nMasukan persentase PBS:";
    ss = get();
    if (ss >= 60)
    {
        ss = 4;
    }
    else
    {
        ss = (20 * (ss / 100)) / 3;
    }
    cout << "<Skor = " << ss << ">\n\n=Kepuasan Pengguna\n*Tingkat kepuasan pengguna terhadap lulusan program studi.\n";

    auto ii = [&sss]() -> bool
    {
        int sa = 0, sb = 0, sc = 0, sd = 0;
        cout << "Masukan nilai persentase \"sangat baik\":";
        sa = get();
        cout << "Masukan nilai persentase \"baik\":";
        sb = get();
        cout << "Masukan nilai persentase \"cukup\":";
        sc = get();
        cout << "Masukan nilai persentase \"kurang\":";
        sd = get();
        int u = sa + sb + sc + sd;
        if (u != 100)
        {
            cout << "Total persentase lebih/kurang dari 100\n";
            return false;
        }
        sss += ((4 * (sa / 100)) + (3 * (sb / 100)) + (2 * (sc / 100)) + sd);
        return true;
    };
    for (int i = 0; i < 7; i++)
    {
        cout << "\nKepuasan aspek ke-" << i + 1 << endl;
        if (!ii())
        {
            --i;
        }
    }
    sss = sss / 7;
    cout << "<Skor = " << sss << ">\n\n";
    float g;
    g = s + ss + sss;
    cout << "Nilai Pelacakan Lulusan: " << g;
    return g;
}
float ilmiah()
{
    int a1, a2, a3, a4, b1, b2, b3, c1, c2, c3, nt;
    cout << "\n[Publikasi Ilmiah Mahasiswa]\n*Pagelaran/pameran/p resentasi/publikasi ilmiah mahasiswa, yang dihasilkan secara mandiri atau bersama DTPS, dengan judul yang relevan dengan bidang program studi dalam 3 tahun terakhir.\nMasukan nilai jumlah publikasi mahasiswa di jurnal nasional tidak terakreditasi:";
    a1 = get();
    cout << "Masukan nilai jumlah publikasi mahasiswa di jurnal nasional terakreditasi:";
    a2 = get();
    cout << "Masukan nilai jumlah publikasi mahasiswa di jurnal internasional:";
    a3 = get();
    cout << "Masukan nilai jumlah publikasi mahasiswa di jurnal internasional bereputasi:";
    a4 = get();
    cout << "Masukan nilai jumlah publikasi mahasiswa di seminar wilayah/lokal/PT:";
    b1 = get();
    cout << "Masukan nilai jumlah publikasi mahasiswa di seminar nasional:";
    b2 = get();
    cout << "Masukan nilai jumlah publikasi mahasiswa di seminar internasional:";
    b3 = get();
    cout << "Untuk Program Magister -> Jumlah tulisan mahasiswa di media massa wilayah.\nUntuk Program Magister Terapan -> Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat wilayah.\nMasukan nilai jumlah:";
    c1 = get();
    cout << "Untuk Program Magister -> Jumlah tulisan mahasiswa di media massa nasional.\nUntuk Program Magister Terapan -> Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat nasional.\nMasukan nilai jumlah:";
    c2 = get();
    cout << "Untuk Program Magister -> Jumlah tulisan mahasiswa di media massa internasional.\nUntuk Program Magister Terapan -> Jumlah pagelaran/pameran/presentasi mahasiswa dalam forum di tingkat internasional.\nMasukan nilai jumlah:";
    c3 = get();
    cout << "Masukan nilai jumlah mahasiswa pada saat TS:";
    nt = get();
    float ri = (a4 + b3 + c3) / nt;
    float rn = (a2 + a3 + b2 + c2) / nt;
    float rl = (a1 + b1 + c1) / nt;
    float s;
    if (ri >= 2)
    {
        s = 4;
    }
    else if (ri < 2 && rn >= 20)
    {
        s = 3 + ri / 2;
    }
    else if (0 < ri < 2 && 0 < rn < 20)
    {
        s = 2 + (2 * (ri / 2)) + (rn / 20) - ((ri * rn) / (2 * 20));
    }
    else if (ri == 0 && rn == 0)
    {
        if (rl >= 70)
        {
            s = 2;
        }
        else
        {
            s = (2 * rl) / 70;
        }
    }
    cout << "Nilai Publikasi Ilmiah Mahasiswa: " << s;
    return s;
}
int main()
{
    cout << "Penilaian Instrumen Suplemen Konversi Peringkat Akreditasi\n";
    float t = 0;
    cout << setprecision(4);
    t += dosentetap();
    t += kurikulum();
    t += mutu();
    t += lulusan();
    t += ilmiah();
    cout << "\n[Skor total: " << t << "]";
    cin.get();
    return 0;
}