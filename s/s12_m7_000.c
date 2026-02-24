section "s12_m7_000"{
    int var0;
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well, we separate here.\nThank you for today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. Thank you for today.");
            Voice_PlayVoice("S1207000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I will return without getting\nsidetracked.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This year will be a good one.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, we have successfully ended our\nvisit to the shrine.\nThank you for today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for today, as well,\n｛Wakaouji＊＊｝.");
            Voice_PlayVoice("S1207000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You are welcome.\nSince Sensei has time, he will\nescort you home.");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Music_StopBGM(0, 40);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(7, 2, (#1));
                Character_Chara_GS2(7, "M7_06F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for escorting me home\nsafely.");
                Voice_PlayVoice("S1207000_G00400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It was sort of a simple thing to do.\nSee you during the new school term.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good one.)");
                }
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G00500", 7, "S1207000_G00501");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "At last, we escaped the crowd.\nThank you for today,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You don't have to thank me for such\na thing.\nThank you, ｛Wakaouji＊＊｝.");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1207000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Shall we end the day here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Voice_PlayVoice("S1207000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I want to walk together for a little\nlonger.\nI will escort you home.");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Music_StopBGM(0, 40);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Character_Chara_GS2(7, "M7_06F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1207000_G00800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It's fine, I wanted to walk you\nhome....\nWell, until next time.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This year will be a good one.)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, well, that is it for today.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, thank you for today, as well.");
            Voice_PlayVoice("S1207000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "No need....\nYou will be a third year student\nthis year.\nYou will have to think of your\nfuture.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah... You're right.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1207000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well, I will return home. Take care.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I will be a third year student...\nThis will be a good year...)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "The task is complete.\nI really appreciate it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for today,\n｛Wakaouji＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("S1207000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "No, no, it was good that you came\nwith me.\nAs for Sensei, he thanks you.\nI will see you home as a sign of\ngratitude.");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Music_StopBGM(0, 40);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(7, 2, (#1));
                Character_Chara_GS2(7, "M7_06F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("S1207000_G01400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "There is really no need....\nAh, right.\nI wanted to have a word with you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(7, 2, (#1));
                Voice_PlayVoice("S1207000_G01500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You are a third year student this\nyear.\nIt is an important time for you to\nthink about your future.\nTime is of the essence.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh... You're right.");
                Voice_PlayVoice("S1207000_G01600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I am now acting like a teacher.\nWell, see you in school.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I will be a third year student...\nThis will be a good year....)");
                }
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I was barely able to walk.\nAre you okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, ｛Wakaouji＊＊｝ took my\nhand and led me through...");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("S1207000_G01800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good.... Is that all for today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh...?");
            Voice_PlayVoice("S1207000_G01900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I will walk you home.\nAs a freebie date.");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Music_StopBGM(0, 40);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(0, 4, 1);
                Character_Chara_GS2(7, "M7_06F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1207000_G02000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "We are here already. That was fast.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("S1207000_G02100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You are welcome.... Ah, right.\nSensei needs to have a word with\nyou.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("S1207000_G02200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You are a third year student this\nyear.\nIt is an important time for you to\nthink about your future.\nTime is of the essence.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah... You're right!");
                Voice_PlayVoice("S1207000_G02300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "It is important that you use your\ntime with care.\nYou cannot regain the time that has\npassed.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, ｛Wakaouji＊＊｝.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1207000_G02400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Good answer....\nWell then, until next time.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I will be a third year student...\nThis will be a good year....)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G02500", 7, "S1207000_G02501");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Okay, that ends today.\nI appreciate it,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you for today,\n｛Wakaouji＊＊｝.");
            Voice_PlayVoice("S1207000_G02600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "No need for that.\nWell then, we will part ways here.");
            Character_Chara_GS2(7, "NON");
            Voice_PlayVoice("S1207000_G02700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah!");
            Message_Who(0);
            Message_MsgDisp("主人公", "?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Character_Chara_GS2(7, "M7_06F", 0);
            Voice_PlayVoice("S1207000_G02800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I nearly forgot....\nYou graduate this year.\nEnjoy the remaining time in high\nschool.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O...Okay!!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1207000_G02900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good answer.\nWell then, we will part ways here!");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's already time to graduate...\nThat was quick.\nOkay, I will do my best until then!)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(7, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G03000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "This ends the visit to the shrine.\nI appreciate you coming here with me\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's a silly thing to say.\nThank you for today,\n｛Wakaouji＊＊｝.");
            Voice_PlayVoice("S1207000_G03100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Don't mention it....\nAh, that reminds me...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What is it?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("S1207000_G03200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Did you notice?\nThis is the last time you will be\nvisiting the shrine for New Year's\nDay as a high school student.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, that's right!");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("S1207000_G03300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It was good that I was able to visit\nthe shrine with a student I was\nhomeroom teacher to for three years.\nWhat a nice memory.");
            Voice_PlayVoice("S1207000_G03400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well then, I will walk you home.");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Music_StopBGM(0, 40);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(7, "M7_06F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home,\n｛Wakaouji＊＊｝.");
                Voice_PlayVoice("S1207000_G03500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You are welcome.\nWell then, let us meet again during\nthe new school term.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's already time to graduate...\nThat was quick.\nOkay, I will do my best until then!)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(7, 3, (#1));
            Character_Chara_GS2(7, "M7_06F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1207000_G03600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I can already see the shrine's\narchway.\nThat was fast.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, really...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("", 7, "S1207000_G03701");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... ｛主人公｝.\nHave you noticed anything in\nparticular during the visit to the\nshrine?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh... Anything special?");
            Voice_PlayVoice("S1207000_G03800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It is very special.\nWhat do you think it is?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1207000_G03900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... I will walk you home.\nLet me know once we reach your\nhouse.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay.");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Music_StopBGM(0, 40);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_06F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1207000_G04000", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Okay, we have arrived.\nIt is time for you to announce the\ncorrect answer.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(7, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1207000_G04100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "You graduate from high school this\nyear.\nIt seems I am your teacher for just\na little while longer.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh......");
                Voice_PlayVoice("S1207000_G04200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Therefore, the visit to the shrine\ntoday is special.\nIsn't it different?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes, you're right...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1207000_G04300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I am glad you think so....\nWell, that is all for today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for walking me home.");
                Voice_PlayVoice("S1207000_G04400", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Don't mention it.\nWell then, until next time.");
                Character_Chara_GS2(7, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's already time to graduate...\nThat was quick.\nI will do my best not to leave\nregretting anything...)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M7", 10);
        System_Call_GS2("K02", "M7", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(7, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
