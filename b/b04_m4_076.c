section "b04_m4_076"{
    int var0 = Date_GetDateOption(2, 23);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404076_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh* Cold!\nLook, even my breath is frosty.");
        Message_MsgSel("The dead trees look so desolate.", "Doing this once in a while is nice.", "It's cold, I can't move.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404076_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Seems so, all the leaves were blown\naway by the wind...\nJust looking at it makes me feel\nchilly...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404076_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I don't like this, I'm going home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404076_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's still cold even if we are to\nmove.\nSo, move!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404076_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh*... Sure is cold.... Achoo!");
        Message_MsgSel("Let's go home before we catch a cold.", "Your cheeks are turning red.", "... What a cute sneeze!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404076_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I guess.\nI feel like my throat is getting\nsore...\nUgh...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404076_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ugh... It's because... it's cold.\nI can't help it!\nAre they really that red?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404076_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't say it's cute! ...\nSay it's cool.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404076_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh* Cold...\nCouldn't we think of an easy way to\nget warm?");
        Message_MsgSel("To curl around the kotatsu perhaps?", "Let's buy steamed pork buns.", "A game of Oshikura Manju?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404076_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then, get a kotatsu. Right now!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404076_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "For Harry, a steamed pork bun might\nbe too little.\nBut in this case, I agree. Let's go!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 8);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404076_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Good old days! ... But, only us?\nThat's just impossible.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404076_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Good old days! ... But, only us?\nThat's just impossible.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I guess so.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404076_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You know...\nRather than just the two of us\nplaying Oshikura Manju, ummm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("B0404076_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Should we try playing it?\nA 2-player, Oshikura Manju?");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
