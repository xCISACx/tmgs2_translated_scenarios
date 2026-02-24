section "s12_m6_000"{
    int var0 = 0;
    if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1206000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, you need to think about your\nuniversity courses soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're right.\nI've been a 3rd year student since\nApril.");
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("S1206000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "*Giggles* Did you forget?\nThat seems like Senpai.");
            Character_BlinkStart(6, 0, (#1));
            Voice_PlayVoice("S1206000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, I'm leaving now. See ya.");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how the new year started.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1206000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai was praying for a long time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yep.\nI'll become a 3rd year student this\nyear.\nI had many things to ask about.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1206000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hmm, turning to God for help...\nYou're so carefree, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1206000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's comparatively important to pray\nfor those things.\nOn top of that, being stingy with a\nmoney offering.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uuugggh.....");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1206000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahaha, you're funny, Senpai!\nWe have to go soon.\nI'll see you to your house.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for escorting me home.");
                Voice_PlayVoice("S1206000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's fine, it was nothing.\nIt was on my way home....\nWell, my best regards for this year!");
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how the new year started.)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_Chara_GS2(6, "M6_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1206000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hah... I'm tired...");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's most likely because I did a lot\nof serious praying.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1206000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, what did you pray for?");
            Message_Who(0);
            Message_MsgDisp("主人公", "A lot of things.\nAnd you, ｛Amachi＊＊｝?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("S1206000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I prayed for many things, too....\nI just want one thing to come\ntrue...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh?");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1206000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Nothing, talking to myself.\nL-Let's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S1206000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nHey, let me walk you home, quickly!\nLet's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for escorting me home.");
                Voice_PlayVoice("S1206000_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's fine, no need to thank me.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1206000_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I had fun today.\nWell, I have somewhere to be! ...\nGood luck this year!");
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how the new year started.)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 3){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "This is the year,\n｛Amachi＊＊｝.");
            Voice_PlayVoice("S1206000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. Senpai graduates...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S1206000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I feel a little lonely when I think\nabout saying farewell to Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1206000_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, I'm sorry!\nI just let out what I was really\nthinking.");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1206000_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Just a little longer...\nPlease keep in contact until the\nend, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll graduate soon...\nThe year went by really fast.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1206000_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai will graduate soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yep. It's pretty soon...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1206000_F02000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Will you really graduate?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... I will.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("S1206000_F02100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There was a strange pause just\nnow...\nWouldn't you like to stay for\nanother year?\nIt wouldn't really be a problem,\nSenpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What do you mean?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1206000_F02200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It means just that!\nWell, we should be going soon.\nI'll walk you home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for escorting me home.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1206000_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah. Well then, see you, Senpai!");
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Three months until graduation.\nI don't have any regrets to leave\nbehind.)");
                }
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 6, "S1206000_F02400");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝, you'll be\ngraduating soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that was a fast three years.\nI was able to make many memories,\ntoo...\nIt was fun.");
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("S1206000_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Why would you say such a thing?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("S1206000_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's not time for graduation, yet.");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1206000_F02700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "And yet I, myself, haven't done so\nmuch at Hanegasaki Academy...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1206000_F02800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nSo please do not say things like\nthat, okay...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
            Character_BlinkStart(6, 0, (#1));
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1206000_F02900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... It's fine. I'll see you home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay...");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Character_Chara_GS2(6, "M6_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for escorting me home.");
                Voice_PlayVoice("S1206000_F03000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nIt may be the last time I visit the\nshrine for New Year's Day with\nSenpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why is that? ...\nAh, because I'm graduating?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why is that on your mind so much...\nIt's okay, really.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("S1206000_F03100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Hah.\nWhen I look at Senpai, I start to\nworry over weird things.\nI'm an idiot.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("S1206000_F03200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Anyway, let's go again next year!\nTogether.... Promise me?\nSee ya, Senpai.");
                Character_Chara_GS2(6, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll graduate soon...\nThe year went by really fast.)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M6", 10);
        System_Call_GS2("K02", "M6", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(6, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
