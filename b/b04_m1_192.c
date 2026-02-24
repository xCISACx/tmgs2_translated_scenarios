section "b04_m1_192"{
    int var0 = Date_GetDateOption(2, 62);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_10F", 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0401192_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "How good are you at skiing?");
        Message_MsgSel("If it's skiing, leave it to me!", "I'm alright at it.", "I can't ski at all.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(1, "M1_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 11);
                Message_PauseSkinship();
                Voice_PlayVoice("B0401192_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ehh... You're good.\nIt's kinda unexpected.\nDo you wanna go to the advanced\ncourse?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401192_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't go pretending you can.\nIt's dangerous, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401192_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "\"Alright\", huh?\nShould you escort me to the advanced\ncourse?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401192_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "\"At all\", you say...\nSay that before you come here...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_10F", 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0401192_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The snow today is quite nice.");
        Message_MsgSel("Alright. Let's compete, then!", "Let's build a snowman, then!", "The conditions seem nice.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401192_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... You wanna?\nWhoever loses treats the other to\noden!\nLet's go!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401192_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'll let you build one later.\nLet's just ski for now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401192_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, we're lucky.\nLet's ski while the conditions are\nstill good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_10F", 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0401192_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When you're going to a ski lodge,\nyou kinda feel merry, just like a\nkid, don't you?");
        Message_MsgSel("You can escape the everyday life.", "Eh? But I'm always like this?", "You're always suffering...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401192_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Something like that.\nMy mind goes completely blank.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401192_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Alright!\nLet's see if I can give you a chop\nwhile we ski!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401192_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'm not.\nThis has nothing to do with what I\ndo at Sangosho.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401192_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I wonder if I look like I'm\nsuffering that much...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sorry. I meant it as a joke...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401192_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's true that I'm busy with the\ncafe and school, but I don't think\nit's painful.\nHonestly.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401192_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "At first I was acting kinda\nself-important, like \"I'm doing this\nfor my grandpa's sake\", but it's\ndifferent now.");
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401192_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I really like Sangosho....\nI just wanted to you know.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
