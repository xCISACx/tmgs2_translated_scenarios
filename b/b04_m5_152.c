section "b04_m5_152"{
    int var0 = Date_GetDateOption(2, 44);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "B0405152_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "How good are you at darts,\n｛主人公｝?");
        Message_MsgSel("I'd like for you to teach me darts.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405152_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. Let me see your grip...\nWow, your hand is soft～▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405152_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm, I want this to be more\nrelaxed...\nIs that okay with you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405152_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, taking it easy is the best.\nLet's just go at it with ease.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405152_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Umm...\nThe middle is worth 50 points...");
        Message_MsgSel("Do you know how to calculate the points?", "The darts are stuck～.", "You've gotten used to this.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405152_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm not that good at it, but I guess\nI can.\nUmm, that spot over there is worth 5\npoints...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0405152_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If I aim accurately...\nAh, it's bad if they fall out!\nBut it's too late...\nYou're already taking them out...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405152_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, I have a dart board at home.\nAh, right.\nLet's play at my place next time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "B0405152_E00800");
        Message_Who(5);
        Message_MsgDisp("Chris", "You've gotten better at darts,\n｛主人公｝.\nDon't you seem to strike the spots\nthat you aim for?");
        Message_MsgSel("I always get what I want.", "It's a coincidence.", "I actually practice at home.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405152_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nPlease don't go too hard on me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405152_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That phrase is kinda cool...");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's a line from a movie.\nThe main character is a female\nsniper.");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405152_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ehh...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405152_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "If you were aiming at me, I'd\nprobably give up straight away.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I wonder if I seem that strong.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405152_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nThat line you repeated just then was\nheaps cool.");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405152_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nBut I don't want you to ever use\nthat line...\nIt's way too powerful.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405152_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's especially bad to say it to\nguys.\nSo using that line is banned, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What kind of power...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405152_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? ...\nAh, is that what being humble is?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405152_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I thought so.\nYou've gotten really good at darts.\nI want you to teach me.");
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
