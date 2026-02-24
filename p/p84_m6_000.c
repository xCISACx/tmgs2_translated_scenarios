section "p84_m6_000"{
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            SoundEffect_PlayStream(3, "SS_DSE_052_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, 10. Are you okay with this?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7406000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Heh, you're a pretty good helper.\nAs expected, you were trained by the\nStudent Council, weren't you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "If it's copying, leave it to me! ...\nBut hey, can you cut down the\nboasting?");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7406000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Aah, it's almost that time! Hurry!");
            Voice_PlayVoice("P7406000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you! Well, bye!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ehehe, I was praised by\n｛Amachi＊＊｝!)");
            SoundEffect_StopStream(3, 40);
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            SoundEffect_PlayStream(3, "SS_DSE_052_000");
            Message_Who(0);
            Message_MsgDisp("主人公", "H-Huh? I'm sure if you push here...");
            SoundEffect_StopStream(3, 40);
            SoundEffect_PlayStream(2, "SS_T_00_069_M00");
            Message_Who(0);
            Message_MsgDisp("主人公", "E-Eh? It's broken!?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... It's out of paper.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What, aaah, y-you're right!\nAhahahaha!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Really～... We've gotta hurry!\nNow we don't have much time!");
            Message_Who(0);
            Message_MsgDisp("主人公", "I-I'm sorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* Real big mistake...)");
            SoundEffect_StopStream(2, 40);
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Here's a projector.\nThe previous class forgot to return\nit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I told them to bring it directly to\nthe next class.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7406000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Thank you, Senpai! I was saved!");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're welcome.\nAside from that, make it back to the\nclassroom safely, okay?");
            Voice_PlayVoice("P7406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Aah, I will! See you later!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Giggles* I was thanked by\n｛Amachi＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝. Well...\nUmm...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You couldn't find one?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, y-yeah... It's ridiculous.");
            Voice_PlayVoice("P7406000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Other people lent us another\nprojector a little while ago, it's\nokay now.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7406000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nIt was a mistake to have asked you,\nSenpai.");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Massive failure...)");
            }
        }
    else {
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Please follow the exact rules!\nNext time you do it, there will be a\npenalty!");
            Voice_PlayVoice("P7414000_W00700", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "Okay, I'm sorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's alright now,\n｛Amachi＊＊｝.");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("P7406000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Amaaaazing...\nIt feels like you're a woman now,\nSenpai...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you.\nMore importantly, will you return it\nback to the classroom?");
            Voice_PlayVoice("P7406000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, of course!\nSee you later, Senpai.\nI'm saved, thank you!");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was thanked by\n｛Amachi＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P7414000_W01000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "It's alright to do things like that\nsince it's normal.\nBesides, other classes are doing it\n, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "We-Well, you've got a point but,\nit'll be a nuisance for the next\nclass...");
            Voice_PlayVoice("P7414000_W01100", #1, "");
            Message_Who(0);
            Message_MsgDisp("Male Student", "Anyway, I'm busy right now. Bye.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, W-Wait! ... He's gone.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(6);
            Message_MsgDisp("Amachi", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, umm...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("P7406000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\n*Sigh* It was a mistake to ask you,\nSenpai...");
            Character_BlinkStart(6, 0, (#1));
            Voice_PlayVoice("P7406000_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It'll be fine since you have to go\ntake and receive them.\nWell, be careful.");
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Massive failure...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
