section "b04_m6_053"{
    int var0 = Date_GetDateOption(2, 14);
    if (var0 == 0){
        System_GlobalWork(1, 0, 0);
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406053_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... It's fairly genuine.\nOh, they sell chow mien!\nLet's buy it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Giggles*.\n｛Amachi＊＊｝ is in high\nspirits.)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 0);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0406053_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, it looks like the fireworks are\nstarting soon.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406053_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... It's quite professional!\nAh, they sell chow mien!\nHey, let's eat some!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Giggles*.\n｛Amachi＊＊｝ seems to be in\nhigh spirits.)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
            Character_ChFace(1, 0, 0);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("", 6, "B0406053_F00300");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.\nThe fireworks are starting soon!");
            }
        }
    else if (var0 == 1){
        System_GlobalWork(1, 0, 1);
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406053_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, target practice!\nThe best prize is... Game software.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want to try?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0406053_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "No, it's fine.\nAren't those prizes set up in a way\nso that they will never fall?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0406053_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Because of that...\nI get irritated and go too far.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(You're such an adult,\n｛Amachi＊＊｝...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
            Character_ChFace(0, 0, 0);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0406053_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, it seems the fireworks are\nbeginning soon.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406053_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, apricot candy!\nHey, let's eat some!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?\nBut we just ate cotton candy a\nlittle while ago.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0406053_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I have another stomach for sweets!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Both were sweets...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
            Character_ChFace(0, 0, 0);
            Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("", 6, "B0406053_F01900");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.\nIt seems the fireworks are starting\nsoon!");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B90", "PL", 0);
    }
