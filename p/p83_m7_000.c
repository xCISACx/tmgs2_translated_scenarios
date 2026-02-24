section "p83_m7_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(7, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm back from purchasing teacakes!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* We're busier than usual\nduring the Culture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("P7307000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Member of the executive committee.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nIs something wrong?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7307000_G00100", 7, "P7307000_G00101");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nSensei happened to run into a guest.\nMay he bring them here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes! Thank you.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P7307000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Well then, please prepare tea for\ntwo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Leave it to me please, since I am\nthe person in charge of making the\ntea.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Preparing two cups of tea...)");
            }
        else if (Parameter_GetCh1Param(7, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm back from purchasing teacakes!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* We're busier than usual\nduring the Culture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nIs something wrong?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7307000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Actually, I happened to meet one of\nthe guests.\nCould you prepare some tea while I\nbring them here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Understood!\nSince I'm the person in charge of\nmaking the tea, leave it to me.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7307000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... Is that so?\nIt's easy to ask if you are in\ncharge.\nWell then, two people please.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I have to prepare tea for\ntwo!)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(7, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, I loaned five pipe chairs to\nthe Brass Band Club...\nThis completes the material list!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("P7307000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Member of the executive committee.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!\nIs something wrong?");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7307000_G00600", 7, "P7307000_G00601");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝....\nActually, the battery in my penlight\nwent out.");
            Voice_PlayVoice("P7307000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I would like for you to distribute\nfour spare batteries.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so?\nI'm in charge of the materials.\nPlease wait for a moment!");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("P7307000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "By all means.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Now where did I put those\nbatteries...?)");
            }
        else if (Parameter_GetCh1Param(7, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, I loaned five pipe chairs to\nthe Brass Band Club...\nThis completes the material list!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!\nIs something wrong?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7307000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You are in charge of the\nmaterials....\nActually, the battery in my penlight\nwent out.");
            Voice_PlayVoice("P7307000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I would like for you to distribute\nfour spare batteries.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so?\nUnderstood, I will bring them\nimmediately!");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("P7307000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am sorry for giving you more work.\nI appreciate it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Now where did I put those\nbatteries...?)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(The water leak of the Takoyaki shop\nis repaired!\n*Phew* Being in charge of the floor\nis a lot of work...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("P7307000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Member of the executive committee.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝.\nIs something wrong?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7307000_G01300", 7, "P7307000_G01301");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.\nAs a matter of fact, Sensei was\napproached in the gym and asked for\ndirections repeatedly.");
            Voice_PlayVoice("P7307000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I'd be very grateful if you put up a\nguide poster in the corridor.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I-I'm sorry!\nSince I am in charge of the floor, I\nwill do so at once!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7307000_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That would be very helpful.\nThank you very much.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great! I better hurry!)");
            }
        else if (Parameter_GetCh1Param(7, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(The water leak of the Takoyaki shop\nis repaired!\n*Phew* Being in charge of the floor\nis a lot of work...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Music_PlayBGM(0, "MN_C_07_000_D00", 127, 40);
            Voice_PlayVoice("", 7, "P7307000_G01600");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, do you have a\nminute?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nWhat's wrong?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7307000_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Actually, Sensei was approached in\nthe gym and asked for directions\nrepeatedly.\nI mean, he doesn't look like a\nstudent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... I suppose.");
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7307000_G01800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Therefore, I have a suggestion.\nWill you put up a guidance poster in\nthe corridor?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah! Yes!\nI will prepare it immediately.\nThank you for the suggestion!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7307000_G01900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, give it a try.\nYou'll be appreciated for your\nefforts for the floor.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, I will hurry!)");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P84", "M7", 0);
    }
