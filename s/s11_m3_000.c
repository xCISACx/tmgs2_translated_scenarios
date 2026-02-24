section "s11_m3_000"{
    int var0;
    if (Parameter_GetCh1Param(3, 335) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Hikami＊＊｝\ngot.)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("S1103000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Okay luck.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S1103000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is very 50/50.\nIs it good or is it bad?\nI would like for it to say a\ndistinct \"fortune\".");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Luck?");
        Character_BlinkStart(3, 0, (#1));
        Character_ChFace(0, 2, 1);
        Voice_PlayVoice("S1103000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I can be pleased when I have a good\nfortune.\nI should have braced myself for bad\nluck....\nHowever, I have both.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ wanted to get\na distinct luck, but got neither\ngood or bad...)");
        }
    else if (Parameter_GetCh1Param(3, 335) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what ｛Hikami＊＊｝\ngot.)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("S1103000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... You came.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What did you get?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S1103000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Terrible luck.\nThere is no fortune worse than\nthis....\nHow refreshing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh... Is it okay?");
        Voice_PlayVoice("S1103000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, I was not careful enough to\navoid getting this.\nThat is what I meant.\nThankfully, I will be more careful.");
        Character_BlinkStart(3, 0, (#1));
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S1103000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I did not get half measured luck.\nExcellent luck and terrible luck,\none of the two, is enough for me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So... That was good?)");
        }
    else {
        var0 = System_Randam(0, 100);
        if (var0 <= 50){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Hikami＊＊｝\ngot.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_??F", 0);
            Voice_PlayVoice("S1103000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Okay luck.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1103000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is very 50/50.\nIs it good or is it bad?\nI would like for it to say a\ndistinct \"fortune\".");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Luck?");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("S1103000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I can be pleased when I have a good\nfortune.\nI should have braced myself for bad\nluck....\nHowever, I have both.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Hikami＊＊｝ wanted to get\na distinct luck, but got neither\ngood or bad...)");
            }
        else if (var0 >= 51){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what ｛Hikami＊＊｝\ngot.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_??F", 0);
            Voice_PlayVoice("S1103000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You came.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... What did you get?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1103000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Terrible luck.\nThere is no fortune worse than\nthis....\nHow refreshing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh... Is it okay?");
            Voice_PlayVoice("S1103000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I was not careful enough to\navoid getting this.\nThat is what I meant.\nThankfully, I will be more careful.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1103000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I did not get half measured luck.\nExcellent luck and terrible luck,\none of the two, is enough for me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(So... That was good?)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 335, 1);
    }
