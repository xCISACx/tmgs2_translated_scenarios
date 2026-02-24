section "b04_m5_076"{
    int var0 = Date_GetDateOption(2, 23);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405076_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, the avenue of trees in winter is\namazing...");
        Message_MsgSel("The dead trees look so desolate.", "Doing this once in a while is nice.", "It's cold, I can't move.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0405076_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Rather than saying that, it surely\nfeels less desolate if you think the\ntrees are preparing for spring,\ninstead.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405076_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nBeing able to feel Japan's four\nseasons feels good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405076_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then～, let's go to a warm place and\ndrink something warm!\nI want to drink hot milk.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405076_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, I want to draw the scenery here.");
        Message_MsgSel("Show me when you're done.", "Why would you draw this lonely scene...", "Your frozen hands won't be able to draw!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405076_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. I'll show you first.\nJust wait for it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405076_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I sometimes feel this way.\nI want to hear the lonely sounds...\nDon't you get that?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0405076_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Really...\nBut it's bad to give up before I\nactually try.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "B0405076_E00800");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝, your ears and\ncheeks are bright red▼");
        Message_MsgSel("Kyaa～, don't look.", "Your nose is red, ｛Chris＊＊｝.", "I've actually got a fever...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405076_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh～, why～?\nYou want to hide it, even though\nit's cute?\nLet me see▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405076_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? Like a reindeer?\nA mirror, get me a mirror～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405076_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh, really? That's bad... Let's go.\nI'll walk you home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405076_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh, really? That's bad... Let's go.\nI'll walk you home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah!\nBut when I checked my temperature\nthis morning, I was fine!\nSo...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0405076_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "............ Are you really okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405076_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Hmm... Really?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really～.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405076_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "If you give such a cute answer, I\nwon't be able to let you go home.");
                Voice_PlayVoice("B0405076_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's go to a warm place, then.\nAnd drink tea... And then go home.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay! Thanks, ｛Chris＊＊｝!");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405076_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nI'm a bit troubled by you thanking\nme.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405076_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The one who is happy about being\nable to be together for a little\nlonger is probably me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405076_E01900", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'll return the thanks.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
