section "r03_g3_000"{
    if (Parameter_GetCh1Param(12, 513) != 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(12, "G3_12F", 0);
        Voice_PlayVoice("", #1, "R0312000_L00000");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "｛主人公｝～!\nMerry Christmas!!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, Merry Christmas,\n｛Nishimoto＊＊｝!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("R0312000_L00100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Woah, you look so cute today!\nThat dress looks good altogether!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, really?");
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("R0312000_L00200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "What's with this sudden sexiness?\nGeez! This and this～!");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(12, 2, (#1));
            Voice_PlayVoice("R0312000_L00300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I envy you～!\nI want to have that kinda dress!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("R0312000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Tell me where you bought it next\ntime!");
            Character_BlinkStart(12, 0, (#1));
            Voice_PlayVoice("R0312000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Ah, I still have to greet everyone.\nSee ya!");
            Character_Chara_GS2(12, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Same as always, leaving just like a\nstorm...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(However, I'm glad that she praised\nme!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("R0312000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I have to finish goin' around\ngreeting friends.\nLater!");
            Character_Chara_GS2(12, "NON");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(12, "G3_12F", 0);
        Voice_PlayVoice("R0312000_L00700", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Oh... ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Merry Christmas,\n｛Nishimoto＊＊｝!");
        if (Parameter_ChkPlayer(17) == 1){
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("R0312000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "That dress...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, is it weird?");
            Character_BlinkStart(12, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0312000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Eeh, no? I think it's lovely.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("R0312000_L01000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "But, I almost want to imitate you\nsince it suits you so well.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("R0312000_L01100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Well...\nThe design is a bit sloppy at the\nwaist.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(12, 2, (#1));
            Voice_PlayVoice("R0312000_L01200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It suits you really well from the\nwaist down, I think!");
            Character_BlinkStart(12, 0, (#1));
            Voice_PlayVoice("R0312000_L01300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Consult me next time. See ya!");
            Character_Chara_GS2(12, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'm honestly taken aback...)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("R0312000_L01400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You're bold to wear casual clothes\nin a place like this...\nYou should imitate me.");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("R0312000_L01500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Well, I'm being called, so I'm gonna\ngo.\nLater!");
            Character_Chara_GS2(12, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... I failed...)");
            }
        }
    Parameter_AddCh1Param(12, 86, 1);
    }
