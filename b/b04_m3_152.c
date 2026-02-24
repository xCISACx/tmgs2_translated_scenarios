section "b04_m3_152"{
    int var0 = Date_GetDateOption(2, 44);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403152_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is my first time trying out\ndarts.\nI wonder if it is fun or not...\nI will leave it to you to decide how\nwe will play.");
        Message_MsgSel("I'd like for you to teach me darts.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0403152_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... So the both of us are amateurs.\nIt cannot be helped, I will have the\nemployees teach us.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403152_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are surprisingly relentless, to\nbe challenging an amateur to a\nmatch.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403152_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, let us do that.\nIt is because we came here for\nrecreation.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403152_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I cannot quite hit the spots that I\nam aiming for...");
        Message_MsgSel("It's enjoyable because it's difficult.", "Fix your elbow and then throw it.", "You're not cut out for it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403152_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That might be so.\nBut even so, if it is too difficult,\nI get discouraged.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403152_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see...!\nSo I cannot be shaky when I throw\nthe dart.\nThank you, I will try being aware of\nthat.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403152_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I am aware of that.\nEven so, I am putting in the effort.\nWill you just watch and not say\nanything?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "B0403152_C00800");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You're good, ｛主人公｝.\nHaven't you gotten better at this?");
        Message_MsgSel("Haha, it was a fluke～!", "I've been practicing in secret.", "All thanks to you, ｛Hikami＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403152_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are modest...\nThere's no way you would get better\nby fluking it.\nYour power of concentration has\ngotten better.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403152_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, I see....\nShouldn't you be more inclined to\nspend your time studying rather than\nplaying around?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403152_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWhat the- Do you pity me because I\nhave a low score?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403152_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh, me? I didn't do anything.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, try and guess!");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403152_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIn terms of techniques, I was not\nable to teach you a thing.\nHmm...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0403152_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "What exactly did I do, during the\nmany times that we came here...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's it, ｛Hikami＊＊｝!");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403152_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh? ...\nAh, so you mean that you've gotten\nbetter by continually throwing the\ndarts.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, probably!");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403152_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nEven though I am bad at darts, to\nhave you say that to me means coming\nhere was worth it.\nI'm... g-glad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nHuh, ｛Hikami＊＊｝ is\nembarrassed▼)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
