section "h6c_g4_002"{
    Background_Bg_GS2("BG_SC710_SU_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's my turn to make food today.\nWhat should I make?");
    Message_MsgSel("Canned yakitori.", "Special chicken and egg on rice.", "Stuffed chicken wing tips.");
    switch (Message_TextSelect()){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIt's bothersome, so I'll just make\ncanned yakitori.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("", #1, "H6C13000_M03400");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝, was it your\nturn to make food today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("H6C13000_M03500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... So what's on the menu today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh, the thing in front of you...");
            Voice_PlayVoice("H6C13000_M03600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Well...");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("H6C13000_M03700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You've worked hard making food.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H6C13000_M03800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Is this perhaps... what I'm eating?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, everyone is...");
            Character_BlinkStart(13, 0, (#1));
            Character_BlinkStart(13, 0, (#1));
            Voice_PlayVoice("H6C13000_M03900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Then is everyone your rival?");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's not the case...");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("H6C13000_M04000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Thanks for the food!");
            Message_Who(0);
            Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor...");
            Character_BlinkStart(13, 0, (#1));
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6C13000_M04100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Uhh...\nAh, but doesn't it feel like we're\non camp?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        else {
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("H6C13000_M04200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "The food was ill-prepared. Umm...");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M04300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Ah, sorry.\nI was just remembering the camp I\nwent on in elementary school.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nI should have made proper food.)");
            }
        Parameter_AddCh1Param(13, 60, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'll make special chicken and\negg on rice!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_08F", 0);
        Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Voice_PlayVoice("", #1, "H6C13000_M04400");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝, it was your\nturn to make food, right?\nShould I help you out with anything?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Mizushima＊＊｝.\nIt's fine, I've just about finished\nmaking it.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H6C13000_M04500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I'll set out the table then, okay?");
            }
        else {
            Voice_PlayVoice("H6C13000_M04600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("H6C13000_M04700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "It looks tough...\nBut I can't help you out...");
            Message_Who(0);
            Message_MsgDisp("主人公", "N-No, it's fine!\nJust sit down and wait for the food!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 60){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M04800", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.\nIt was nice▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(13, 2, (#1));
                Voice_PlayVoice("H6C13000_M04900", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah.\nI've rediscovered how nice chicken\nand egg on rice is.\nTell me how to make it next time,\nokay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yay, I was complimented!)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6C13000_M05000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "... Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "The food isn't worth thanking me\nfor.");
                Character_BlinkStart(13, 2, (#1));
                Voice_PlayVoice("H6C13000_M05100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "You don't have to be so modest...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, she ate it all...\nThank gosh～)");
                }
            Parameter_AddCh1Param(13, 60, 3);
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6C13000_M05200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... how was it?");
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6C13000_M05300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "H-Hmm... Well!\nI can't say, because it's a recipe\nthat I don't know!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H6C13000_M05400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Did you perhaps only make mine like\nthis...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, everyone ate the same food...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H6C13000_M05500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Sorry, my stomach isn't strong...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            Parameter_AddCh1Param(13, 60, #3);
            }
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright!\nI'll take on the stuffed chicken\nwing tips!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6C13000_M05600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Something smells good...\nWow, how ethnic! I love this!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha. Please go ahead and eat.");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_08F", 0);
            Background_Bg_GS2("BG_SC710_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_C_13_000_D01", 127, 40);
            Voice_PlayVoice("H6C13000_M05700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.\nI've just finished making food.");
            Character_BlinkStart(13, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("H6C13000_M05800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "By yourself...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. It took some time, though.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6C13000_M05900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "You made it all by yourself...");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-Well, please sit!");
            }
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        if (Parameter_GetPl1Param(20) >= 80){
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H6C13000_M06000", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Gee!\nWhen did you learn how to make this?\nThis is unfair!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, was it nice?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(13, 3, (#1));
                Voice_PlayVoice("H6C13000_M06100", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Yeah, it seems like you could open a\nstore to sell these.\nGive me the recipe next time, okay?\nThanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nI'm glad I tried my best making\nfood.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("H6C13000_M06200", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, the food isn't worth thanking me\nfor.");
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M06300", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "I didn't know anything about you at\nall...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, she ate it all.\nI'm glad I tried my best making\nfood.)");
                }
            Parameter_AddCh1Param(13, 60, 5);
            }
        else {
            if (Parameter_GetCh1Param(13, 513) != 1){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("H6C13000_M06400", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food. I'm full.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, have you had enough already?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(13, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H6C13000_M06500", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Y-Yeah, uhh～...\nI was thinking of going on a diet～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice... Sorry.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H6C13000_M06600", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Thanks for the food.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, have you had enough already?");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(13, 2, (#1));
                Voice_PlayVoice("H6C13000_M06700", #1, "");
                Message_Who(13);
                Message_MsgDisp("Mizushima", "Is it my fault that you're forcing\nyourself to do these things?");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(13, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So it wasn't nice...)");
                }
            Parameter_AddCh1Param(13, 60, #5);
            }
        break ;
        }
    }
