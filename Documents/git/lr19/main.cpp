#include <iostream>
#include <string>

using namespace std;


string getValue(const string& key, const string& values) {
    size_t pos = values.find(key + "=");
    if (pos == string::npos) return "";

    size_t start = pos + key.length() + 1;
    size_t end = values.find(',', start);
    if (end == string::npos) end = values.length();

    return values.substr(start, end - start);
}

int main() {
    string values, text;
    getline(cin, values);
    getline(cin, text);

    string result;

    for (size_t i = 0; i < text.length(); ) {
        if (text[i] == '[') {
            size_t end = text.find(']', i);
            if (end != string::npos) {
                string key = text.substr(i + 1, end - i - 1);
                string val = getValue(key, values);

                if (val != "") {
                    result += val;
                } else {
                    result += "[" + key + "]";
                }

                i = end + 1;
            } else {
                result += text[i];
                i++;
            }
        } else {
            result += text[i];
            i++;
        }
    }

    cout << result << "\n";
    return 0;
}
