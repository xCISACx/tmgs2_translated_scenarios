section "l04_m7_000"{
    int var0;
    int var1;
    int var2;
    int var3 = 0;
    Background_Bg_GS2("BG_SC340_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(36) == 1){
        var0 = Parameter_GetPl1Param(36);
        if (Parameter_ChkChar(7, 3)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Parameter_AddCh1Param(7, 61, 0);
                Parameter_AddCh1Param(7, 60, 3);
                Parameter_AddCh1Param(7, 62, #1);
                var2 = 1;
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Parameter_AddCh1Param(7, 61, 0);
                Parameter_AddCh1Param(7, 60, 6);
                Parameter_AddCh1Param(7, 62, 0);
                var2 = 2;
                }
            else {
                Parameter_AddCh1Param(7, 61, #1);
                Parameter_AddCh1Param(7, 60, 0);
                Parameter_AddCh1Param(7, 62, 10);
                var2 = 3;
                }
            Parameter_InCh1Param(7, 555, 5);
            }
        else {
            var1 = 1;
            }
        }
    else if (Parameter_GetPl1Param(37) == 1){
        var0 = Parameter_GetPl1Param(37);
        if (Parameter_ChkChar(7, 3)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 3);
                Parameter_AddCh1Param(7, 62, #1);
                var2 = 4;
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 10);
                Parameter_AddCh1Param(7, 62, #1);
                var2 = 5;
                }
            else {
                Parameter_AddCh1Param(7, 61, 6);
                Parameter_AddCh1Param(7, 60, 10);
                Parameter_AddCh1Param(7, 62, #1);
                var2 = 6;
                }
            Parameter_InCh1Param(7, 555, 4);
            }
        else {
            var1 = 1;
            }
        }
    else if (Parameter_GetPl1Param(39) == 1){
        var0 = Parameter_GetPl1Param(39);
        if (Parameter_ChkChar(7, 3)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 6);
                Parameter_AddCh1Param(7, 62, #3);
                var2 = 7;
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Parameter_AddCh1Param(7, 61, 6);
                Parameter_AddCh1Param(7, 60, 10);
                Parameter_AddCh1Param(7, 62, #3);
                var2 = 8;
                }
            else {
                Parameter_AddCh1Param(7, 61, 10);
                Parameter_AddCh1Param(7, 60, 10);
                Parameter_AddCh1Param(7, 62, #3);
                var2 = 9;
                }
            Parameter_InCh1Param(7, 555, 1);
            }
        else {
            var1 = 1;
            }
        }
    else if (Parameter_GetPl1Param(39) == 2){
        var0 = Parameter_GetPl1Param(39);
        if (Parameter_ChkChar(7, 3)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 3);
                Parameter_AddCh1Param(7, 62, #1);
                var2 = 10;
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 3);
                Parameter_AddCh1Param(7, 62, #3);
                var2 = 11;
                }
            else {
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 6);
                Parameter_AddCh1Param(7, 62, #3);
                var2 = 12;
                }
            Parameter_InCh1Param(7, 555, 2);
            }
        else {
            var1 = 1;
            }
        }
    else if (Parameter_GetPl1Param(39) == 3){
        var0 = Parameter_GetPl1Param(39);
        if (Parameter_ChkChar(7, 3)){
            if (Parameter_GetCh1Param(7, 130) <= 2){
                Parameter_AddCh1Param(7, 61, #1);
                Parameter_AddCh1Param(7, 60, 0);
                Parameter_AddCh1Param(7, 62, 3);
                var2 = 13;
                }
            else if (Parameter_GetCh1Param(7, 130) == 3){
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 3);
                Parameter_AddCh1Param(7, 62, #1);
                var2 = 14;
                }
            else {
                Parameter_AddCh1Param(7, 61, 3);
                Parameter_AddCh1Param(7, 60, 3);
                Parameter_AddCh1Param(7, 62, #3);
                var2 = 15;
                }
            Parameter_InCh1Param(7, 555, 3);
            }
        else {
            var1 = 1;
            }
        }
    if (var1 == 1){
        if (Parameter_GetCh1Param(7, 130) < 2){
            if (Parameter_GetPl1Param(36) == 1){
                Parameter_AddCh1Param(7, 61, 0);
                Parameter_AddCh1Param(7, 60, 3);
                Parameter_AddCh1Param(7, 62, #1);
                var2 = 16;
                Parameter_InCh1Param(7, 555, 5);
                }
            else {
                var2 = 17;
                }
            }
        else if ((Parameter_GetCh1Param(7, 130) == 2) || (Parameter_GetCh1Param(7, 130) == 3)){
            var2 = 18;
            }
        else if (Parameter_GetCh1Param(7, 130) >= 4){
            var2 = 19;
            }
        }
    if (var2 == 16){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("L0407000_G05400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. What is the matter?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt is Valentine's chocolate.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Obligatory chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh, umm... Sorry.");
        Voice_PlayVoice("L0407000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, it is fine. Thank you.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Urgh～...\nWell, I guess it's fine since he\naccepted it?)");
        }
    else if (var2 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("L0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt is Valentine's chocolate.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Obligatory chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh, umm... Sorry.");
        Voice_PlayVoice("L0407000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, it is fine. Thank you.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Urgh～...\nWell, I guess it's fine, since he\naccepted it?)");
        }
    else if (var2 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00100");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here.\nIt's Valentine's chocolate.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Obligatory chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh, umm... Sorry.");
        Voice_PlayVoice("L0407000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, it's fine.\nThe vice principal told me that I\ncould only accept obligatory\nchocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehh, is that so?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. So I will accept this.\nThank you.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, that's that.)");
        }
    else if (var2 == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nI have been waiting.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Pardon?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I was just talking to myself.\nUhh～... What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here!\nIt is the long- awaited Valentine's\nchocolate!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0407000_G00900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Obligatory chocolate...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh, umm... Sorry.");
        Voice_PlayVoice("L0407000_G01000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It is fine.\nThe vice principal told me to try\nand not accept anything except\nobligatory chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so?");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G01100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "At any rate, that is how it seems.\nAt any rate...");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Urgh～, as I thought, he looks a\nlittle annoyed.)");
        }
    else if (var2 == 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("L0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt is Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G01200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, this... It looks very expensive.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I splurged quite a lot on it.");
        Voice_PlayVoice("L0407000_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Us teachers can only accept\nobligatory chocolates.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G01400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It is fine.\nThere is a loophole, I will call it\n\"high quality obligatory chocolate\".\nI will accept this.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was forced to be labeled\nobligatory chocolate...)");
        }
    else if (var2 == 5){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00100");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here.\nIt's Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G01500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, this... It looks very expensive.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I splurged quite a lot on it.");
        Voice_PlayVoice("L0407000_G01600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Us teachers can only accept\nobligatory chocolates...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G01700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Then...\nThis will be special obligatory\nchocolate.\nIs that okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank goodness, he accepted it.)");
        }
    else if (var2 == 6){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nI have been waiting.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Pardon?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I was just talking to myself.\nUhh～... What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here!\nIt is the long- awaited Valentine's\nchocolate!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G01800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Oh, this...\nIt looks like quite a high quality\nobligatory chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh!?\nUmm, I splurged quite a lot,\nthough...");
        Voice_PlayVoice("L0407000_G01900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Us teachers can only accept\nobligatory chocolates...");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G02000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is special.\nEven if they said they'd exchange\nthis for all the chocolates in the\nschool, I wouldn't exchange it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He looked happy!)");
        }
    else if (var2 == 7){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("L0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt is Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G02100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This...\nis handmade obligatory chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh!?\nUmm, I did my best to make it,\nthough...");
        Voice_PlayVoice("L0407000_G02200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is that so? You are right.\nIt looks delicious.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G02300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It is a given that us teachers can\nonly accept obligatory chocolate.\nSo please make it that.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank gosh, I made it well!)");
        }
    else if (var2 == 8){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00100");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here.\nIt's Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G02400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is... handmade?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I did my best!");
        Voice_PlayVoice("L0407000_G02500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "You are right. It looks delicious.");
        Voice_PlayVoice("L0407000_G02600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Actually, it is said that us\nteachers can only accept obligatory\nchocolate.\nThe principal stressed this point.");
        Message_Who(0);
        Message_MsgDisp("主人公", "No way...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G02700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "But because it looks delicious, I\nwill eat it.\nThank you.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It looks like he was happy to\naccept it.)");
        }
    else if (var2 == 9){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nI have been waiting.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Pardon?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I was just talking to myself.\nUhh～... What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here!\nIt is the long- awaited Valentine's\nchocolate!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G02800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is... handmade?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I did my best.");
        Voice_PlayVoice("L0407000_G02900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yeah, you are right.\nIt looks delicious.\nSo you are good at cooking.");
        Voice_PlayVoice("L0407000_G03000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "However, the staff members can only\naccept obligatory chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, then...");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G03100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is my chocolate.\nI am not giving it to anyone else.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It looked like he was extremely\nhappy to accept it!)");
        }
    else if (var2 == 10){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("L0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, yes. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt's Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G03200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is... handmade, isn't it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I did my best to make it.");
        Voice_PlayVoice("L0407000_G03300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I see...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G03400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Although I can only accept\nobligatory chocolate, I will eat\nthis.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm glad I tried my best making\nit!)");
        }
    else if (var2 == 11){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00100");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here.\nIt's Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G03500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is... handmade?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I did my best to make it.");
        Voice_PlayVoice("L0407000_G03600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hmm～...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G03700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I can only accept obligatory\nchocolate, but I do not care about\nthat anymore.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yay!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He looked happy to accept it.)");
        }
    else if (var2 == 12){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nI have been waiting.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Pardon?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I was just talking to myself.\nUhh～... What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here!\nIt is the long- awaited Valentine's\nchocolate!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G03800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is... handmade?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I did my best!");
        Voice_PlayVoice("L0407000_G03900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "*Sigh*...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G04000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The principal has been telling me to\nonly accept obligatory chocolate,\nover and over since this morning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G04100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "As if.\nThe principal's scolding is\nincomparable to your handmade\nchocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yay!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He looked happy to accept it.)");
        }
    else if (var2 == 13){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("L0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, yes. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt's Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G04200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is... handmade chocolate.\nAm I wrong?");
        Message_Who(0);
        Message_MsgDisp("主人公", "You are right!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G04300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I see... So I was right.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I tried quite hard.");
        Voice_PlayVoice("L0407000_G04400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yeah.\nI will give you a prize for trying\nhard.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G04500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Right, the principal also told me to\nonly accept obligatory chocolate, so\nthinking about it...");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G04600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, no. Thank you.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I should have tried harder to make\nthe chocolate better...)");
        }
    else if (var2 == 14){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00100");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here.\nIt's Valentine's chocolate.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G04700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is...\nUhh, what they call handmade\nchocolate?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I tried my best.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G04800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I see.\nYou did not have to try that hard...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G04900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, no, I will eat it... Thank you.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I should have tried harder to make\nthe chocolate better...)");
        }
    else if (var2 == 15){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G00200");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nI have been waiting.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Pardon?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I was just talking to myself.\nUhh～... What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here!\nIt is the long- awaited Valentine's\nchocolate!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G05000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "This is...\nhandmade chocolate, isn't it?\nNo matter how you look at it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I did my best!");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0407000_G05100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I see... You did your best.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Character_BlinkStart(7, 0, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0407000_G05200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I am just asking for clarification,\ndid you try eating this yourself?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I still haven't tried it.\nAh, then I'll sample a little--");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("L0407000_G05300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, you should stop! No...\nSee, I want to keep it all to\nmyself.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Okay.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I should have tried harder to make\nthe chocolate better...)");
        }
    else if (var2 == 17){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("L0407000_G05400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. What is the matter?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here...\nIt is Valentine's chocolate.");
        Voice_PlayVoice("L0407000_G05500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I see...\nBut should you not give this to the\nboy that you like?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh, umm...");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G05600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Please give it to him.\nI will take my leave now.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I might have been too selfish...)");
        }
    else if (var2 == 18){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "L0407000_G05700");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, here.\nIt's Valentine's chocolate.");
        Voice_PlayVoice("L0407000_G05800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "For me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0407000_G05900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is this what they mean by \"A woman's\nheart and Autumn are both fickle\"?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G06000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I cannot accept this.\nSo I will turn it down, this time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "But...");
        Voice_PlayVoice("L0407000_G06100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I will take my leave.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I have a feeling that I did\nsomething to hurt\n｛Wakaouji＊＊｝...)");
        }
    else if (var2 == 19){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_01F", 0);
        Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here! It's Valentine's chocolate.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G06200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes...");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝?");
        Voice_PlayVoice("L0407000_G06300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I cannot accept this.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh!? Umm... Why not?");
        Voice_PlayVoice("L0407000_G06400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I have a feeling that if I accept\nthis now, I will have to make amends\nfor it later.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0407000_G06500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It seems like even I have human\nemotions.\nI am sorry.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I have a feeling that I did\nsomething to hurt\n｛Wakaouji＊＊｝...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
