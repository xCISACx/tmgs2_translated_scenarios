section "p14_m8_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(8, 3, (#1));
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0408000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "*Sigh* It was delicious!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?");
        Character_BlinkStart(8, 0, (#1));
        Voice_PlayVoice("P0408000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah.\nI think it's better than our\nuniversity canteen!\nPassed!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Masaki＊＊｝!)");
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(8, 2, (#1));
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0408000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Umm... What's that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?\nIt's spaghetti and meat sauce...");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("P0408000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Seriously?\nThe taste and the texture's a bit\ndifferent, you know?");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("P0408000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I found the yaminabe rather\nenjoyable.\nI see, meat sauce...\nAll the more reason for it's\nstrangeness after hearing that...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So, he's saying that it tasted bad.\nHow disappointing...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
