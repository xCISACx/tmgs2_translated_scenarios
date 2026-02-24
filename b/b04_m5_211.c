section "b04_m5_211"{
    int var0 = Date_GetDateOption(2, 63);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405211_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah.\nI locked eyes with Mr. Elephant.\nIt's looking at you.");
        Message_MsgSel("Maybe it's bothered by us?", "It might be scared of you.", "Let's play the staredown game with it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405211_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Maybe～.\nLet's heat things up and show off\nhow lovey-dovey we are▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405211_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Why? Are you always scared of me...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405211_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Alright.\nBe sure to put on a very funny face\nso you won't lose to Mr. Elephant.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405211_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah. That hippo has a tooth cavity.");
        Message_MsgSel("Hippos can't get a tooth cavity.", "I wonder if it can't sleep due to the pain.", "It's just dirt.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405211_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh, is that so...\nYou're quite knowledgeable.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405211_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's pitiable... Ugh...\nNow my teeth are starting to hurt...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405211_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? ...\nAh, so hippos don't get cavities.\nI see.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405211_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The ferrets...\nIf they go to sleep all huddled up\nlike that, it seems like they'll get\ntired instead.");
        Message_MsgSel("It'd be bad if their bellies hurt.", "It looks comfortable...", "Their faces while sleeping are cute.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405211_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nBut I wonder why they can sleep like\nthat so normally...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405211_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That...\nWhat looks so comfortable about\nthat...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405211_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh. That...\nWhat looks so comfortable about\nthat...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Don't you think so, when you see\ntheir faces?\nThey look happy.");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0405211_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah...\nIt's like they're having a nice\ndream.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Don't they?");
                Voice_PlayVoice("B0405211_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nYou have this amazing kind of magic\nthat always affects me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0405211_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Until you say such things to me, I\nonly ever see things in such a\nbitter way.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405211_E01600", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Since I met you, every day is heaps\nfun.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405211_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nIt doesn't look that bad when I see\ntheir faces while sleeping.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
